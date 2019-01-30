#include <iostream>
#include <thread>
#include <chrono>
#include <random>
#include <cstdint>

//Need Testing...
//このコードは精査して使わないと大変なことになります。　本当です！　本当ですよ！！！！！

class WTool {
public:
	WTool() {
		std::cout << "Create!!" << std::endl;
	}

	bool Do() {
		std::cout << "Do Creation for any!" << std::endl;
		return 0;
	}

	~WTool() {
		std::cout << "Clean for Create!" << std::endl;
	}
};
class WModifier {
public:
	WModifier() {
		std::cout << "Construct Modification for Created." << std::endl;		
	}

	bool Do() {
		std::cout << "Do Mod for any!" << std::endl;
		return true;
	}

	~WModifier() {
		std::cout << "Clean for this Modification." << std::endl;
	}
};

bool DoTheSomeThing() {
	WTool Fool;//why i can't use name of 'Tool'.
	
	std::random_device rd;

	Fool.Do();
	
	WModifier Selfy;

	Selfy.Do();

	std::this_thread::sleep_for(std::chrono::nanoseconds(rd()));
	
	return true;
}

int main() {

	std::random_device rd;

	std::uint32_t C = rd();//uint32_t => expression the Type.

	for (std::uint32_t i = 0; i <= C; i++) {
		std::cout << "No Mean Count:" << i << std::endl<< std::endl;
		DoTheSomeThing();//You have Thinking time of DoIt. You have Thinking time of DoIt. Hint!! Multiply The ZERO to ... for Nothing.

		std::cout << std::endl;
		std::cout <<"No Mean Count:"<<i<< " -> "<<"In よその電子ジャー！" << std::endl<< std::endl<< std::endl;
	}
	return 0;

}