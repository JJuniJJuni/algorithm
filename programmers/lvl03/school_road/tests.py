from main import solution
from unittest import TestCase

class TestSolution(TestCase):
    def test_solution(self):
        self.assertEqual(2, solution(2, 2, []))
        self.assertEqual(3, solution(3, 2, []))
        self.assertEqual(1, solution(3, 2, [[2, 2]]))
        self.assertEqual(4, solution(4, 3, [[2, 2]]))