set(PROJECT_NAME  Application)
set(PROJECT_INDEX 500)
set(CMAKE_INCLUDE_CURRENT_DIR ON)


set(SOURCE_FILES
CCell.cpp
CCellDatabase.cpp
main.cpp
)

set(HEADER_FILES

CCell.h
CCellDatabase.h
CTemplateDatabase.h

)

add_executable(${PROJECT_NAME} WIN32 ${SOURCE_FILES} ${HEADER_FILES})


  # add dependend libraries
  target_link_libraries(${PROJECT_NAME} PUBLIC
  )