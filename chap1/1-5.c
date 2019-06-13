#include <stdio.h>
#include <stdlib.h>

void copy_chr();
void count_chr();
void count_chr_two();
void count_ln();
void count_blank();
void count_tabs();
void copy_replace();

int main(int argc, char *argv[])
{
    //copy_chr();
    //count_chr();
    //count_chr_two();
    //count_ln();
    //count_blank();
    copy_replace();

    return EXIT_SUCCESS;
}

void copy_chr()
{
    int c;
    while ((c = getchar()) != EOF)
        putchar(c);
}

void count_chr()
{
    int c;
    long nc = 0;
    while((c = getchar()) != EOF)
       ++nc;
    printf("\nnc is %ld\n", nc);
}

void count_chr_two()
{
	double nc;
	for(nc = 0; getchar() != EOF; ++nc);
    	printf("\nnc is %.0f\n", nc);
}

void count_ln()
{	
    int c;
    long nl = 0;
    while((c = getchar()) != EOF) {
	    if (c == '\n') {
       		++nl;
	    }
    }
    printf("\nnl is %ld\n", nl);
}

void count_blank()
{
	int c;
	long cb;
	while((c = getchar()) != EOF) {
	    if (c == ' ') {
       		++cb;
	    }	
	}
    	printf("\ncb is %ld\n", cb);
}

void count_tabs()
{

	int c;
	long ct;
	while((c = getchar()) != EOF) {
	    if (c == '\t') {
       		++ct;
	    }	
	}
    	printf("\nct is %ld\n", ct);
}

void copy_replace()
{
	int c, in_space;
	in_space = 0;
	while((c = getchar()) != EOF) {	
		if (c == ' ') {
			if (in_space == 0) {
				in_space = 1;	
				putchar(c);
			}
		}
		if (c != ' ') {
			in_space = 0;	
			putchar(c);
		}
	}

}
