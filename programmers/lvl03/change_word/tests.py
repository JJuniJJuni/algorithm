from unittest import TestCase
from main import solution, one_distance

class TestSolution(TestCase):
    def test_solution(self):
        self.assertEqual(1, solution("abc", "bbc", ["bbc"]))
        self.assertEqual(2, solution("abc", "acd", ["acd", "abd"]))
        self.assertEqual(4, solution("hit", "cog", ["hot", "dot", "dog", "lot", "log", "cog"]))

    def test_one_distacne(self):
        self.assertTrue(one_distance("abc", "bbc"))
        self.assertFalse(one_distance("abc", "ccc"))
        self.assertTrue(one_distance("abc", "abd"))