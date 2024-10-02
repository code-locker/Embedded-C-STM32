# Optimization Report for 005PinRead

## O0 Optimization level
```
arm-none-eabi-size   006PinReadOptimization.elf 
arm-none-eabi-objdump -h -S  006PinReadOptimization.elf  > "006PinReadOptimization.list"
Finished building: 006PinReadOptimization.list
 
   text	   data	    bss	    dec	    hex	filename
    820	      8	   1568	   2396	    95c	006PinReadOptimization.elf
```

## O1 Optimization level
```
arm-none-eabi-size   006PinReadOptimization.elf 
arm-none-eabi-objdump -h -S  006PinReadOptimization.elf  > "006PinReadOptimization.list"
   text	   data	    bss	    dec	    hex	filename
    740	      8	   1568	   2316	    90c	006PinReadOptimization.elf
```

## O2 Optimization level
```
arm-none-eabi-size   006PinReadOptimization.elf 
arm-none-eabi-objdump -h -S  006PinReadOptimization.elf  > "006PinReadOptimization.list"
   text	   data	    bss	    dec	    hex	filename
    720	      8	   1568	   2296	    8f8	006PinReadOptimization.elf
```

## O3 Optimization level
```
arm-none-eabi-size   006PinReadOptimization.elf 
arm-none-eabi-objdump -h -S  006PinReadOptimization.elf  > "006PinReadOptimization.list"
   text	   data	    bss	    dec	    hex	filename
    720	      8	   1568	   2296	    8f8	006PinReadOptimization.elf
```
