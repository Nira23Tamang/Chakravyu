// Logo
#include <stdio.h>
#include <windows.h>
// Function to creating loading bar
void loadingBar()
{
    // 0 - black background,
    // A - Green Foreground
    system("color 0F");

    // Initialize char for printing
    // loading bar
    char a = 177, b = 219;

    printf("\t\t\t                                         ####    ####                                     \n");
	printf("\t\t\t                                #############       ######                                \n");
	printf("\t\t\t                           ######                        ######                           \n");
	printf("\t\t\t                        ####  ##     #########     ##         #####                       \n");
	printf("\t\t\t                     ###       ########            ########      ####                     \n");
	printf("\t\t\t                  ###                 ##          ##     ###### ##   ###                  \n");
	printf("\t\t\t                ###     ###        #####     ######     ##    ####     ###                \n");
	printf("\t\t\t              ###     ### ###    ###                     #        ##     ###              \n");
	printf("\t\t\t             ##     ##      ##    ##    ######   #          ###     ##     ##             \n");
	printf("\t\t\t            ##    ##         ##    ##   #   ##   #######   ## ### ###       ###           \n");
	printf("\t\t\t         ##     ####     ###         #      ##                           ##    ##         \n");
	printf("\t\t\t        ##         ####    ###              ##     #        ###     ##    ##    ##        \n");
	printf("\t\t\t       ##          ## ###    ##             ##    ##      ###  ###   ##    ##    ##       \n");
	printf("\t\t\t       #    ##     ##    ##    ###     ##############            ##    ########    #      \n");
	printf("\t\t\t      ##    ##     ##    ##    ##    ####             ###          ##    #     #   ##     \n");
	printf("\t\t\t     ##    ##         ########    ##                  ##          #          ##    #      \n");
	printf("\t\t\t     ## #########     #    #######                      #######          ######    ##     \n");
	printf("\t\t\t     ##    #    #    ##         #                        #    ##    #    #    ##   ##     \n");
	printf("\t\t\t     ##    #    #    ##         #                        #    ##    #    #    ##   ##     \n");
	printf("\t\t\t     ##   ##    #              ##                        ##   ##    #    ##   ##    #     \n");
	printf("\t\t\t     #    ##   #######    #######                        ##    ######    ##   ##    #     \n");
	printf("\t\t\t     #    ##   ##    #    #    ##                        ##    #    #               #     \n");
	printf("\t\t\t     #    ##   ##    #    #    ##                        ##    #    #               #     \n");
	printf("\t\t\t     ##   ##    #    ##   ##    #                        #    ##    ##              #     \n");
	printf("\t\t\t     ##    #    #          #    ##                      ##    #    ############    ##     \n");
	printf("\t\t\t      #    ##          ######    ###                  ###    ##    #               #      \n");
	printf("\t\t\t      ##    #          #           ###              ###     ##    ######          ##      \n");
	printf("\t\t\t       #    ########                 ####       #####     ##           #####      #       \n");
	printf("\t\t\t       ##    #     ##  ###    ##                          ##    ###         #    ##       \n");
	printf("\t\t\t        ##          ###     ###                            ###     ###          ##        \n");
	printf("\t\t\t         ##               ###         ###############        ###      ###      ##         \n");
	printf("\t\t\t          ##  ###       ###    ###          ##      ##  ###    ###       ###  ##          \n");
	printf("\t\t\t           ###        ###        ####       ##       ####  ##               ###           \n");
	printf("\t\t\t             ##     ###     #     ##    ##########    ##    ##      ##     ###            \n");
	printf("\t\t\t              ###    ###   ##    ##    ##              ##    ##   ###     ##              \n");
	printf("\t\t\t                ###     ####     #######     ############      ####     ##                \n");
	printf("\t\t\t                  ###   ##      ##          ####  ##     #           ###                  \n");
	printf("\t\t\t                    #####       #           ##     #     ##        ###                    \n");
	printf("\t\t\t                       ####           ########     #           ####                       \n");
	printf("\t\t\t                          #####                            #####                          \n");
	printf("\t\t\t                              #########            #########                              \n");
    printf("\t\t\t                                     ################                                     \n");
		
    printf("\n\n\n\n\t\t\t\t\tLoading Chakravyu...\n\n");
    printf("\t\t\t\t\t");
    int i;

    // Print initial loading bar
    for ( i = 0; i < 50; i++)
        printf("%c", a);

    // Set the cursor again starting
    // point of loading bar
    printf("\r");
    printf("\t\t\t\t\t");

    // Print loading bar progress
    for ( i = 0; i < 50; i++) {
        printf("%c", b);

        // Sleep for 1 second
        Sleep(70);
    }
    
}

