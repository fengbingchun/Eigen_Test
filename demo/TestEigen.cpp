#include <iostream>
#include "funset.hpp"

int main(int argc, char* argv[])
{
	int ret = test_eigenvalues_eigenvectors();

	if (ret == 0) fprintf(stdout, "========== test success ==========\n");
	else fprintf(stderr, "********** test fail: %d **********\n", ret);

	return 0;
}

