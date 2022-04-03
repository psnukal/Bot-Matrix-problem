#include "PES1UG20CS315_H.h"

int main(int argc, char *argv[])
{
    if (argc > 1) 
	{
        	char *filepath = argv[1];
        	userInput_t ui;
        	printf("Start\n");
        	read_file(filepath, &ui);
        	display_matrix_list(ui.zrzc);
        	path_find(&ui);
    	} 
   else 
	{
        	printf("Error!!\n Supply the path of input file\n");
        	exit(1);
    	}
   return 0;
}
