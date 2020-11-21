/*
  *****************************************************************************************
  *                                     It's C Code                                       *
  *****************************************************************************************
 */
// INCLUDES CODE BEGIN //

#include <stdio.h>
#include <locale.h>

// INCLUDES CODE END //


// MAIN FUNCTION BEGIN //
int main(void)
{
	// CODE/INSTRUCTIONS BEGIN //

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

  // CHECK OPERATION MAIN FUNCTION BEGIN //
	return 0;
  // CHECK OPERATION MAIN FUNCTION END //

  // CODE/INSTRUCTIONS END //
}
// MAIN FUNCTION END //