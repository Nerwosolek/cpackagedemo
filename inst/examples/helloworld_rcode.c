// the necessary header files are automatically included by `csource`

SEXP C_hello()
{
    Rprintf("Hello from C with R code embedded\n");
    return R_NilValue;
}

/* R
# this chunk will be extracted and executed by `csource`.

hello <- function()
    invisible(.Call("C_hello", PACKAGE="helloworld_rcode"))

R */
