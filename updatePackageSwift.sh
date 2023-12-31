#!/bin/bash

cat > Package.swift <<-EOF
 
// swift-tools-version: 5.8
// The swift-tools-version declares the minimum version of Swift required to build this package.

import PackageDescription

let package = Package(
    name: "$1",
    platforms: [
      .macOS(.v10_15), .iOS(.v12), .tvOS(.v12)
    ],
    products: [
        // Products define the executables and libraries a package produces, and make them visible to other packages.
        .library(
            name: "$1",
            targets: ["$1"]),
    ],
    targets: [
        /*.binaryTarget(
            name: "$1",
            url: "$2",
            checksum: "$3"
        ), */
        .binaryTarget(
                    name: "$1",
                    path: "./Sources/$1.xcframework"
        ), 
    ]
)

EOF