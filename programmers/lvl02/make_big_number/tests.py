from unittest import TestCase

from main import *

class TestSolution(TestCase):
    def test_large_number(self):
        self.assertEqual(2, largest_idx(1, 4, [(2, "9"), (0, "4")]))
        self.assertEqual(4, largest_idx(1, 7,[(0, "4"), (4, "3"), (1, "3")]))

    def test_solution(self):
        self.assertEqual("94", solution("1924", 2))
        self.assertEqual("3234", solution("1231234", 3))
        self.assertEqual("775841", solution("4177252841", 4))