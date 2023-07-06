 
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
            url: "https://github.com/mobilespot/mobigeoFramework/raw/0.10.2/MobigeoIosSdk.xcframework.zip",
            checksum: "109b98e96db4daa11624f64b6f99a32961a15c3165136c71cc79305a344a91b5"
        ), 
    ]
)

