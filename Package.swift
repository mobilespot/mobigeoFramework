// swift-tools-version: 5.8
// The swift-tools-version declares the minimum version of Swift required to build this package.

import PackageDescription

let package = Package(
    name: "mobigeoFramework",
    products: [
        // Products define the executables and libraries a package produces, and make them visible to other packages.
        .library(
            name: "mobigeoFramework",
            targets: ["mobigeoFramework"]),
    ],
    dependencies: [
        // Dependencies declare other packages that this package depends on.
        // .package(url: /* package url */, from: "1.0.0"),
    ],
    targets: [
        // Targets are the basic building blocks of a package. A target can define a module or a test suite.
        // Targets can depend on other targets in this package, and on products in packages this package depends on.
        .binaryTarget(
            name: "MobigeoIosSdk",
            url: "https://github.com/mobilespot/mobigeoFramework.git",
            checksum: "22d0364089cefe99a56ebe84b9a7ee9a9296b87b3bfb6c6eab54e3acfbb4ffb7"
        ), 
        /* .target(
            name: "mobigeoFramework",
            dependencies: []),
        .testTarget(
            name: "mobigeoFrameworkTests",
            dependencies: ["mobigeoFramework"]),
        .binaryTarget(
            name: "MobigeoIosSdk",
            url: "https://github.com/mobilespot/mobigeoFramework.git",
            checksum: "5abfd6da1de52e477401af7ef27b90277d423707b62a04ca2c02b8481b6a17bc"
        ), 
        .binaryTarget(
            name: "MobigeoIosSdk",
            path: "MobigeoIosSdk.xcframework.zip"
        )*/

    ]
)
