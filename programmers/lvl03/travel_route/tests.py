from unittest import TestCase
from main import solution

class TestSolution(TestCase):
    def test_solution(self):
        self.assertEqual(["ICN", "BBB", "ICN", "AAA"], solution([["ICN", "BBB"], ["BBB", "ICN"], ["ICN", "AAA"]]))
        self.assertEqual(["ICN", "JFK", "HND", "IAD"], solution([["ICN", "JFK"], ["HND", "IAD"], ["JFK", "HND"]]))
        self.assertEqual(["ICN", "ATL", "ICN", "SFO", "ATL", "SFO"]
                         , solution([["ICN", "SFO"], ["ICN", "ATL"], ["SFO", "ATL"], ["ATL", "ICN"], ["ATL","SFO"]]))