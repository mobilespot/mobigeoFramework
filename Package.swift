 
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
            url: "https://github.com/mobilespot/mobigeoFramework/raw/0.10.14/MobigeoIosSdk.xcframework.zip",
            checksum: "31744f408b5241369cfc5c256b920cbdec9374a9b06f7e1feb83457f4660d847"
        ), */
        .binaryTarget(
                    name: "MobigeoIosSdk",
                    path: "./Sources/MobigeoIosSdk.xcframework"
        ), 
    ]
)

