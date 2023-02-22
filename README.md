# ft_printf
This function is a replacement for C's printf function. It mimics the behavior of printf.
It covers %c for characters, %s for strings, %d and %i for decimal numbers, %x and %X for
lowercase and uppercase hexadecimals, %% for percent sign, %p for poinert values, and %u
for unsigned intigers. It is written using write function. I am also using va_list macro
to keep track of the unkown number of arguments that could be passed into my ft_printf.
