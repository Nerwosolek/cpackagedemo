#include "rfuns.h"
#include "cfuns.h"

/* a wrapper around my_c_sum callable from R */
SEXP my_c_sum_wrapper(SEXP x)
{
    double s;

    if (!Rf_isReal(x)) {
        /* the caller is expected to prepare the arguments
           (doing it at the C level is tedious work) */
        Rf_error("`x` should be a vector of type 'double'");
    }

    /* Exercise: consider missing value (NA) checking
       as my_c_sum doesn't do it */

    s = my_c_sum(REAL(x), (size_t)XLENGTH(x));

    return Rf_ScalarReal(s);
}
