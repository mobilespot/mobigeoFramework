 
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
        /*.binaryTarget(
            name: "MobigeoIosSdk",
            url: "https://github.com/mobilespot/mobigeoFramework/raw/0.10.10/MobigeoIosSdk.xcframework.zip",
            checksum: "3dad4e2c902a05a71fffc2af8ed082c3f2da40279621b8dae7fa98bf8a9279ab"
        ), */
        .binaryTarget(
                    name: "MobigeoIosSdk",
                    path: "./Sources/MobigeoIosSdk.xcframework"
        ), 
    ]
)

