// the necessary header files are automatically included by `csource`

SEXP C_hello()
{
    Rprintf("Hello from C code without R code embedded\n");
    return R_NilValue;
}

