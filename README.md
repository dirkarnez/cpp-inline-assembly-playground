cpp-inline-assembly-playground
==============================
x64. Only works when using gcc

### Syntax
```assembly
:"=r"(y)    /* y is output operand */
:"r"(x)     /* x is input operand */
```

### Reference
- [How to Use Inline Assembly Language in C Code — gcc 6 documentation](https://dmalcolm.fedorapeople.org/gcc/2015-08-31/rst-experiment/how-to-use-inline-assembly-language-in-c-code.html)
- [GCC-Inline-Assembly-HOWTO](https://www.ibiblio.org/gferg/ldp/GCC-Inline-Assembly-HOWTO.html)
- [Extended Asm (Using the GNU Compiler Collection (GCC))](https://gcc.gnu.org/onlinedocs/gcc/Extended-Asm.html)