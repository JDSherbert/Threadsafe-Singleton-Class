// ©2023 JDSherbert. All rights reserved.

#pragma once

#include <mutex>

// Creating a thread-safe singleton in C++ requires handling the potential race conditions that can occur 
// when multiple threads attempt to access the singleton instance concurrently. 
// One common approach is to use the double-checked locking pattern. 
// int main() 
// {
//    // Example usage of the thread-safe singleton
//    Singleton& singleton = Singleton::GetInstance();
//    // singleton.SomeFunction();
//    return 0;
// }
//
class Singleton 
{
public:

    static Singleton& GetInstance() 
    {
        if (instance == nullptr) 
		{
            // Lock to prevent multiple threads from creating instances
            std::lock_guard<std::mutex> lock(instanceMutex);

            // Check if another thread has already created an instance while waiting for the lock
            if (instance == nullptr) 
			{
                instance = new Singleton();
            }
        }

        return *instance;
    }

private:
    // Private constructor to prevent external construction
    Singleton() {}

    // Private destructor to prevent external destruction
    ~Singleton() {}

    // Private copy constructor / assignment operator to prevent copying
    Singleton(const Singleton&);
    Singleton& operator=(const Singleton&);

    static Singleton* instance;
    static std::mutex instanceMutex;
};
