import XCTest
import SwiftTreeSitter
import TreeSitterMir

final class TreeSitterMirTests: XCTestCase {
    func testCanLoadGrammar() throws {
        let parser = Parser()
        let language = Language(language: tree_sitter_mir())
        XCTAssertNoThrow(try parser.setLanguage(language),
                         "Error loading Mir grammar")
    }
}
