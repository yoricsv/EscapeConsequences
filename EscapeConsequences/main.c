/*
  *****************************************************************************************
  *                                     It's C Code                                       *
  *****************************************************************************************
  *****************************************************************************************
  *                             The PREPROCESSOR DIRECTIVEs                               *
  *****************************************************************************************
  * #include (the preprocessor directive) - addict a code from other file;                *
  *****************************************************************************************
  * <STDIO.H> - standard library of Input/Output function on C                            *
  * <LOCALE.H> - standard library contain of different language symbols                   *
  * <LINITS.H> - contain MAX / MIN values of C variable types                             *
  *****************************************************************************************
*/
// INCLUDES CODE BEGIN //

#include <stdio.h>
#include <locale.h>

// INCLUDES CODE END //


/*
  *****************************************************************************************
  *                                  The MAIN function                                    *
  *****************************************************************************************
  * int - function type must return some integer value after operated;                    *
  * MAIN - function name;                                                                 *
  * void - variable type (don't get/return any values)                                    *
  * ( ... ) - there is write everything we wanna take to the function                     *
  * { ... } - function body. There is contained all instructions.                         *
  *****************************************************************************************
*/
// MAIN FUNCTION BEGIN //

int main(void)
{
	// CODE/INSTRUCTIONS BEGIN //

/*
  *****************************************************************************************
  *                CHANGE LOCALIZATION for right display local SYMBOLS                    *
  *****************************************************************************************
  * SETLOCALE - function allow to use difference local symbols                            *
  * LC_ALL (Locate Categories) - point out to switch all localization functions on        *
  * RU - switch all localization function on for Russian                                  *
  *****************************************************************************************
*/
	// SET RIGHT LOCALIZATION BEGIN //

	setlocale(LC_ALL, "ru_RU");

	// SET RIGHT LOCALIZATION END //


/*
  *****************************************************************************************
  *                                SCAPE CONSEQUENCES                                     *
  *****************************************************************************************
  *                                                                                       *
  * \r - return cursor to line start                                                      *
  * \n (end line) - go to the pointer on next line (analogue [<< endl] )                  *
  * \t (tabulation) - make an indent between symbols                                      *
  * \b - delete last displayed symbol                                                     *
  * \a - sound signal                                                                     *
  *                                                                                       * 
  * \\ - displays a back slash                                                            *
  * \" - displays double quotes                                                           *
  * \' - displays single quote                                                            *
  *                                                                                       *
  *****************************************************************************************
*/

	printf("\n\n ^- This use two escape consequences of\t-\\n (End Line).	");
	printf("\n\t|\t <- There is use two tabulations divided by line[|].	\n\n\n\n");


  //***************************************************************************************
  //*                                    Home Work                                        *
  //***************************************************************************************

	printf("\t\t *\tHomework\t*\r\n\n");
	printf("\t\t ����� \"� ���� �������� ������\"   \n");
	printf("\t\t (����� ���� �.��������)            \n\n");
	printf("\t\t � ���� �������� ������,            \n");
	printf("\t\t � ���� ��� �����,                  \n");
	printf("\t\t ����� � ����� ��������,            \n");
	printf("\t\t ������� ����.                      \n\n");
	printf("\t\t ������ �� ���� ������� :           \n");
	printf("\t\t \"���, ������, ���-���!\"          \n");
	printf("\t\t ����� ������� �������� :           \n");
	printf("\t\t \"������, �� ��������!\"           \n\n");
	printf("\t\t �������� - ����� ���������         \n");
	printf("\t\t ��� ������� ������,                \n");
	printf("\t\t ����� ����, �������� ����,         \n");
	printf("\t\t ������ ��������.                   \n\n");
	printf("\t\t ��!���� �� ���� �������            \n");
	printf("\t\t ��� ������� �������;               \n");
	printf("\t\t ������� ����������                 \n");
	printf("\t\t ���������, �����.                  \n\n");
	printf("\t\t ����� ������� ��������,            \n");
	printf("\t\t � � ������� - �������,             \n");
	printf("\t\t ������ �� ���� ������              \n");
	printf("\t\t ��� ����� �������.                 \n\n");
	printf("\t\t ������ ���, ��������,              \n");
	printf("\t\t �� �������� � ��� ������           \n");
	printf("\t\t � �����, ����� ��������            \n");
	printf("\t\t �������� ��������.                 \n");

/*
  *****************************************************************************************
  *                         CHECK OPERATION MAIN FUNCTION                                 *
  *****************************************************************************************
  *  RETURN - it function show all instructions of the main function are operated         *
  *  0 - good, other - somewhere have a trouble                                           *
  *****************************************************************************************
*/
  // CHECK OPERATION MAIN FUNCTION BEGIN //

	return 0;

  // CHECK OPERATION MAIN FUNCTION END //

  // CODE/INSTRUCTIONS END //
}

// MAIN FUNCTION END //