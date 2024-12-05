// swift-tools-version:5.3
import PackageDescription

let package = Package(
    name: "TreeSitterAlfa",
    products: [
        .library(name: "TreeSitterAlfa", targets: ["TreeSitterAlfa"]),
    ],
    dependencies: [
        .package(url: "https://github.com/ChimeHQ/SwiftTreeSitter", from: "0.8.0"),
    ],
    targets: [
        .target(
            name: "TreeSitterAlfa",
            dependencies: [],
            path: ".",
            sources: [
                "src/parser.c",
                // NOTE: if your language has an external scanner, add it here.
            ],
            resources: [
                .copy("queries")
            ],
            publicHeadersPath: "bindings/swift",
            cSettings: [.headerSearchPath("src")]
        ),
        .testTarget(
            name: "TreeSitterAlfaTests",
            dependencies: [
                "SwiftTreeSitter",
                "TreeSitterAlfa",
            ],
            path: "bindings/swift/TreeSitterAlfaTests"
        )
    ],
    cLanguageStandard: .c11
)
