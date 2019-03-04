ADD_SUBDIRECTORY(googletest)

ADD_EXECUTABLE(c-echo
	main.cpp
)
ADD_EXECUTABLE(test
	test.cpp
)
TARGET_LINK_LIBRARIES(test gtest)

