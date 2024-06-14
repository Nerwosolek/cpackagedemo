hello_c_nor <- function()
    invisible(.Call("C_hello", PACKAGE="helloworld_norcode"))

hello_c <- function()
    invisible(.Call("C_hello", PACKAGE="helloworld_rcode"))
