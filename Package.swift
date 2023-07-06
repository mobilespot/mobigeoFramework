 
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
            url: "https://github.com/mobilespot/mobigeoFramework/raw/0.10.11/MobigeoIosSdk.xcframework.zip",
            checksum: "9f6bdd150d852658a5c1d4fd08dc5e399e9c6f4d597bc8c7e0c7dd2e6909c554"
        ), */
        .binaryTarget(
                    name: "MobigeoIosSdk",
                    path: "./Sources/MobigeoIosSdk.xcframework"
        ), 
    ]
)

