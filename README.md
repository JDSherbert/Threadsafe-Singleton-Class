![image](https://github.com/JDSherbert/Threadsafe-Singleton-Class/assets/43964243/8a288a74-0a1e-4fcb-a5d8-608bb7c9d46b)


# Threadsafe Singleton Class

<!-- Header Start -->
<a href = "https://learn.microsoft.com/en-us/cpp/cpp-language"> <img height="40" img width="40" src="https://cdn.simpleicons.org/c++"> </a>
<img align="right" alt="Stars Badge" src="https://img.shields.io/github/stars/jdsherbert/Threadsafe-Singleton-Class?label=%E2%AD%90"/>
<img align="right" alt="Forks Badge" src="https://img.shields.io/github/forks/jdsherbert/Threadsafe-Singleton-Class?label=%F0%9F%8D%B4"/>
<img align="right" alt="Watchers Badge" src="https://img.shields.io/github/watchers/jdsherbert/Threadsafe-Singleton-Class?label=%F0%9F%91%81%EF%B8%8F"/>
<img align="right" alt="Issues Badge" src="https://img.shields.io/github/issues/jdsherbert/Threadsafe-Singleton-Class?label=%E2%9A%A0%EF%B8%8F"/>
<img align="right" src="https://hits.seeyoufarm.com/api/count/incr/badge.svg?url=https%3A%2F%2Fgithub.com%2FJDSherbert%2FThreadsafe-Singleton-Class%2Fhit-counter%2FREADME&count_bg=%2379C83D&title_bg=%23555555&labelColor=0E1128&title=🔍&style=for-the-badge">
<!-- Header End --> 

-----------------------------------------------------------------------

<a href="https://learn.microsoft.com/en-us/cpp/cpp-language"> 
  <img align="left" alt="C++ Template" src="https://img.shields.io/badge/C++%20Template-black?style=for-the-badge&logo=cpp&logoColor=white&color=black&labelColor=black"> </a>
  
<a href="https://choosealicense.com/licenses/mit/"> 
  <img align="right" alt="License" src="https://img.shields.io/badge/License%20:%20MIT-black?style=for-the-badge&logo=mit&logoColor=white&color=black&labelColor=black"> </a>
  
<br></br>

-----------------------------------------------------------------------
## Overview

Creating a thread-safe singleton in C++ requires handling the potential race conditions that can occur when multiple threads attempt to access the singleton instance concurrently. One common approach is to use the double-checked locking pattern. 
This example uses the mutex functions from the mutex library.

Please note that in modern C++, you can use C++11's `std::call_once` with a `std::once_flag` instead of manually managing a mutex. This is generally considered a safer and more convenient option. However, the above example demonstrates the basic concept of thread safety in a singleton.


-----------------------------------------------------------------------

