cmake_minimum_required(VERSION 3.16)
project(Sentiment_Analyzer_C_)

set(CMAKE_CXX_STANDARD 14)

add_executable(Sentiment_Analyzer_C_
        src/main.cpp
        src/Sentiment_Analyzer.cpp
        src/DSString.cpp
        src/Tweet.cpp)