#include <iostream>
#include <cassert>
#include <cstddef>
 
class Array
{
private:
	int *array{};
	int length{};
 
public:
	Array(int length) {
		assert(length > 0);
		array = new int[static_cast<std::size_t>(length)]{};
		length = length;
	}
	~Array() {
		// Dynamically delete the array we allocated earlier
		delete[] array;
	}
 
	void setValue(int index, int value) {array[index] = value;}
	int getValue(int index) {return array[index];}
 
	int getLength() {return length;}
};
 
int main()
{
	Array arr{10}; // allocate 10 integers
	for (int count{0}; count < arr.getLength(); count++)
		arr.setValue(count, count+1);
 
	std::cout << arr.getValue(5) << '\n';
 
	return 0;
} // ar is destroyed here, so the ~Array() destructor function is called here