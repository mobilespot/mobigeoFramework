 
// swift-tools-version: 5.8
// The swift-tools-version declares the minimum version of Swift required to build this package.

import PackageDescription

let package = Package(
    name: "MobigeoIosSdk",
    platforms: [
      .macOS(.v10_15), .iOS(.v12), .tvOS(.v12)
    ],
    products: [
        // Products define the executables and libraries a package produces, and make them visible to other packages.
        .library(
            name: "MobigeoIosSdk",
            targets: ["MobigeoIosSdk"]),
    ],
    targets: [
        .binaryTarget(
            name: "MobigeoIosSdk",
            url: "82b6a701660203bd8c0bf0f71856be8542401ed1a3992511f34716b0c103f687",
            checksum: "https://github.com/mobilespot/mobigeoFramework/raw/0.10.2/MobigeoIosSdk.xcframework.zip"
        ), 
    ]
)

