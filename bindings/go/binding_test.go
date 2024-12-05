package tree_sitter_alfa_test

import (
	"testing"

	tree_sitter "github.com/tree-sitter/go-tree-sitter"
	tree_sitter_alfa "git.sr.ht/~achrinza/tree-sitter-alfa/bindings/go"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_alfa.Language())
	if language == nil {
		t.Errorf("Error loading Alfa grammar")
	}
}
