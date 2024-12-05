import XCTest
import SwiftTreeSitter
import TreeSitterAlfa

final class TreeSitterAlfaTests: XCTestCase {
    func testCanLoadGrammar() throws {
        let parser = Parser()
        let language = Language(language: tree_sitter_alfa())
        XCTAssertNoThrow(try parser.setLanguage(language),
                         "Error loading Alfa grammar")
    }
}
