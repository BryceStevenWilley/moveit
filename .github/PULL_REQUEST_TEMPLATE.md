### Description

Please explain the changes you made, including a reference to the related issue if applicable

### Checklist
- [ ] **Required by CI**: Run all tests with `catkin_make run_tests` or `catkin build run_tests`
- [ ] **Required by CI**: Code is auto formatted using [clang-format](http://moveit.ros.org/documentation/contributing/code)
      `find . -name '*.h' -or -name '*.hpp' -or -name '*.cpp' | xargs clang-format-3.9 -i -style=file $1`
- [ ] **Required by CI**: Code passes a [clang-tidy](https://moveit.ros.org/documentation/contributing/code/)
      ```
      for file in $(find $CATKIN_WS/build -name compile_commands.json) ; do
        run-clang-tidy -fix -p $(dirname $file)
      done
      ```
- [ ] Extended the tutorials / documentation, if necessary [reference](http://moveit.ros.org/documentation/contributing/)
- [ ] Include a screenshot if changing a GUI
- [ ] Document API changes relevant to the user in the moveit/MIGRATION.md notes
- [ ] Created tests, which fail without this PR [reference](http://docs.ros.org/kinetic/api/moveit_tutorials/html/doc/tests.html)
- [ ] Decide if this should be cherry-picked to other current ROS branches
- [ ] While waiting for someone to review your request, please consider reviewing [another open pull request](https://github.com/ros-planning/moveit/pulls) to support the maintainers

[//]: # "You can expect a response from a maintainer within 7 days. If you haven't heard anything by then, feel free to ping the thread. Thank you!"
