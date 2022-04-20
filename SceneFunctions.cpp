#include "SceneFunctions.h"

bool Intro()
{
	bool input;
	std::cout << "Lorem ipsum dolor sit amet, consectetur adipiscing elit. Duis quis nibh ac quam mattis tristique nec pretium ipsum. Quisque consequat tellus et vulputate varius. Nam tempor ultricies rutrum. Ut rhoncus mauris quam, et placerat mauris ullamcorper sed. Nullam malesuada a ante ac pellentesque. Pellentesque semper imperdiet metus. Etiam dignissim ante eu sapien hendrerit pretium. Morbi quis diam sit amet lacus mattis fermentum id ac sem.\n";
	std::cout << "Enter world ?\n";
	std::cout << "Press 1 for 'yes' and 0 for 'no'\n";
	std::cin >> input;
	return input;
}
