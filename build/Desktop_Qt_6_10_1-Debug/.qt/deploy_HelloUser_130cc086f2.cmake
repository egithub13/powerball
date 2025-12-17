include("/home/ehayes/HelloUser/build/Desktop_Qt_6_10_1-Debug/.qt/QtDeploySupport.cmake")
include("${CMAKE_CURRENT_LIST_DIR}/HelloUser-plugins.cmake" OPTIONAL)
set(__QT_DEPLOY_I18N_CATALOGS "qtbase")

qt6_deploy_runtime_dependencies(
    EXECUTABLE "/home/ehayes/HelloUser/build/Desktop_Qt_6_10_1-Debug/HelloUser"
    GENERATE_QT_CONF
)
