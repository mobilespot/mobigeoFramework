import PackageDescription

// swift-tools-version:5.3
import PackageDescription


let package = Package(
    name: "MobigeoIosSdk",
    platforms: [
        .iOS(.v12)
    ],
    products: [
        // Products define the executables and libraries a package produces, and make them visible to other packages.
        .library(
            name: "MobigeoIosSdk",
            targets: ["MobigeoIosSdk"])
    ],
    dependencies: [
        // Dependencies declare other packages that this package depends on.
    ],
    targets: [
        // Targets are the basic building blocks of a package. A target can define a module or a test suite.
        // Targets can depend on other targets in this package, and on products in packages this package depends on.
   
        /* .binaryTarget(
            name: "MobigeoIosSdk",
            url: "https://github.com/mobilespot/mobigeoFramework.git",
            checksum: "5abfd6da1de52e477401af7ef27b90277d423707b62a04ca2c02b8481b6a17bc"
        ), */
        .binaryTarget(
            name: "MobigeoIosSdk",
            path: "MobigeoIosSdk.xcframework.zip"
        )
    ]
)