# Embedded-C-STM32

## Open OCD semihosting configuration
![Open OCD semihosting configuration](images/open-ocd.png)

### Set the linker arguments 
```
-specs=rdimon.specs -lc -lrdimon
```

### Add semi-hosting run command
```
monitor arm semihosting enable 
```

### Add the below function call to main.c 
```
extern void initialise_monitor_handles(void);
initialise_monitor_handles();
```



## Steps to enable SWV console logs
Copy below code in syscall.c
```
//Debug Exception and Monitor Control Register base address
#define DEMCR        			*((volatile uint32_t*) 0xE000EDFCU )

/* ITM register addresses */
#define ITM_STIMULUS_PORT0   	*((volatile uint32_t*) 0xE0000000 )
#define ITM_TRACE_EN          	*((volatile uint32_t*) 0xE0000E00 )

void ITM_SendChar(uint8_t ch)
{

	//Enable TRCENA
	DEMCR |= ( 1 << 24);

	//enable stimulus port 0
	ITM_TRACE_EN |= ( 1 << 0);

	// read FIFO status in bit [0]:
	while(!(ITM_STIMULUS_PORT0 & 1));

	//Write to ITM stimulus port0
	ITM_STIMULUS_PORT0 = ch;
}
```

In the debug configuration, select below configurations.
```
Debug probe : ST-LINK (ST-LINK GDB Server)
Interface : Enable SWD checkbox and keep default values
Serial Wire Viewer : Enable checkbox with default values
Enable SWV ITM Data Console: Goto Window->Showview->SWV ITM Data Console(In the tool)
```

## Steps to debug
```
1. Right click on the project and configure above settings in the debug configuration window and launch
2. Go to SWV ITM Data Console, click on 'configure trace' and enable port 0.
3. Click on start trace
4. Click on resume or press F5 button
```


