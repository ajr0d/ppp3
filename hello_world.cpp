#include<iostream>
int main()		// C++ progarms start by executing the function main
{
	// std:ccout << "Hello, World!\n";				// output "Hello, World!" -- initial line of the program, but I added exericses below
	std::cout << "Hello, programming!\n";		// output "Hello, programming!"
	std::cout << "Here we go!\n";

	// Instructions below for a computer to navigate to an upstairs bathroom
	// This assumes my house, so if you don't know that, you should befriend me, and hope I invite you one day
	std::cout << "Start by walking to the centre of the kitchen.\n";
	std::cout << "Face north, and walk through to the top of the hallway until you're at the front door.\n";
	std::cout << "Turn right, and take a step.\n";
	std::cout << "Turn right again, and climb the stairs.\n";
	std::cout << "Once at the top of the stairs, walk two steps forward.\n";
	std::cout << "Turn right for a final time, and walk into the bathroom ahead.  If door closed, open it.\n";
	std::cout << "You are now in the upstairs bathroom.\n";
	// still a lot of problems with these steps, a human could getaway with it and even omit a couple but there's still ambuigity for a computer to cause problems
	// what if my dog is in the way? what if the bathroom is occupied? many questions. computers are stupid!
}
