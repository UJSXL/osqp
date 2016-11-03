/* OSQP TESTER MODULE */
/* THE CODE FOR MINIMAL UNIT TESTING HAS BEEN TAKEN FROM http://www.jera.com/techinfo/jtns/jtn002.html */



#include "minunit.h"
#include "osqp.h"

// Include tests
#include "lin_alg/tests_lin_alg.h"
#include "solve_linsys/tests_solve_linsys.h"

int tests_run = 0;


static char * all_tests() {
    mu_run_test(tests_lin_alg);
    mu_run_test(tests_solve_linsys);
    return 0;
}


int main(void) {
    char *result = all_tests();
    if (result != 0) {
        printf("%s\n", result);
    }
    else {
        printf("ALL TESTS PASSED\n");
    }
    printf("Tests run: %d\n", tests_run);

    return result != 0;
}
