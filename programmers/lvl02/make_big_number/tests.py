from unittest import TestCase

from main import *

class TestSolution(TestCase):
    def test_solution(self):
        self.assertEqual("94", solution("1924", 2))
        self.assertEqual("3234", solution("1231234", 3))
        self.assertEqual("775841", solution("4177252841", 4))