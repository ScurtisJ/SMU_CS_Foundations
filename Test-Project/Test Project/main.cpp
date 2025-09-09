#include <iostream>


class Animal{
    public:
        virtual void makeSound(){
            std::cout << "Some generic animal sound" << std::endl;
        }
        virtual void eat()
        {
            std::cout << "Animal is eating" << std::endl;
        }
        virtual ~Animal(){
            std::cout << "Animal destructor called" << std::endl; //destructor is used to delete heap memory of derived classes
        }

};

class Dog : public Animal{
    public:
        int* breeds;
        void run(){
            std::cout << "Dog is running" << std::endl;
        }
        void makeSound() override {
            std::cout << "Woof!" << std::endl;
        }
        ~Dog(){
            std::cout << "Dog destructor called" << std::endl;
        }
};

class Cat : public Animal{
    public:
        void makeSound() override {
            std::cout << "Meow!" << std::endl;
        }
        ~Cat(){
            std::cout << "Cat destructor called" << std::endl;
        }
};

void printIntArray(char arr[], int size){

}

void printCharArray(char arr[], int size){

}

void recursive_function(int depth){
    int large_array[100000]; // Allocate a large array on the stack
    std::cout << "Recursion depth: " << depth << std::endl;
    if (depth < 5){
        recursive_function(depth + 1);
    }
}

int main(){
    int myInt = 0;
    char myChar = 'a';

    std::cout << "Size of int: " << sizeof(myInt) << std::endl;
    std::cout << "i = " << i << sizeof(myChar) << std::endl;
    return 0;

    foo[1] = 3

    pFoo = foo;
    printIntArray(pFoo, SIZE);

    pFoo[1] =5;
    printIntArray(pFoo, SIZE);

    int* arr = new int[10]
    arr[0] = 42 ;

    delete[] arr;
    arr = nullptr;

    recursive_function(1);

    /*
         Variables are stored in specific memory addresses.

         int myInt = 0;
         1. Compiler allocates memory for an integer (4 bytes on most systems).
        2. The variable myInt is assigned a specific memory address (e.g., 0x7ffeedcba980).
        3. The value 0 is stored at that memory address.
        4. When code is compiled, the compiler replaces occurrences of myInt with its memory address.
        5. The linker resolves the memory references to myInt in the final executable (program execution).
    */

   //int cat = 42; 
   //int* ptr_to_cat = &cat; // Get the memory address of cat, (creates variable that holds address of cat, exists on the stack)

   //ptr_to_cat++; // Increment the pointer to point to the next integer (4 bytes ahead) (adds 1 to the address stored in ptr_to_cat)

   //*ptr_to_cat = *ptr_to_cat + 1; // Add 1 to the value of cat using ptr_to_cat

    /*
    int i = 0;
    i++;
    std::cout << "Hello, World" << std::endl;
    std::cout << "i = " << i << std::endl;
    */

   Animal* myDog = new Dog(); // Animal pointer to Dog object
   myDog->makeSound(); // Outputs: Woof!
   myDog->eat(); // Outputs: Animal is eating
   ((Dog *) myDog)->run(); // Correct way to call run method of Dog class, so now we are casting the animal pointer to dog pointer, so now we are accessing it like a dog class
    //myDog->run(); // Error: 'class Animal' has no member named 'run', because while you are making a dog object you are accessing it as an animal class, which doesn't have the run method

   delete myDog; // Calls Dog destructor followed by Animal destructor, but animal destructor should be virtual to ensure proper cleanup of derived class resources, as to delete the dog class first and then animal class

    rn 0;
    
}