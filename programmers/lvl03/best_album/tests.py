import unittest
from main import solution

class TestSolution(unittest.TestCase):
    def test_solution(self):
        self.assertEqual([4, 1, 3, 0], solution(["classic", "pop", "classic", "classic", "pop"], [500, 600, 150, 800, 2500]))
        self.assertEqual([3, 0, 1], solution(["classic", "pop", "classic", "classic"], [500, 600, 150, 800]))