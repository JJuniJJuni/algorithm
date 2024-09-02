from main import solution
from unittest import TestCase


class TestSolution(TestCase):
    def test_solution(self):
        self.assertEqual(1, solution(['A', 'B'], ['A B']))
        self.assertEqual(1, solution(['A', 'B'], ['A B', 'B A', 'A B']))
        self.assertEqual(2, solution(['A', 'B', 'C'], ['A B', 'B A', 'A B']))
        self.assertEqual(2, solution(['A', 'B', 'C'], ['A B', 'B A', 'A B', 'C B', 'C A']))
        self.assertEqual(2, solution(["muzi", "ryan", "frodo", "neo"]
                                     , ["muzi frodo", "muzi frodo", "ryan muzi", "ryan muzi", "ryan muzi", "frodo muzi", "frodo ryan", "neo muzi"]))
        self.assertEqual(4, solution(["joy", "brad", "alessandro", "conan", "david"]
                                     , ["alessandro brad", "alessandro joy", "alessandro conan", "david alessandro", "alessandro david"]))

        self.assertEqual(0, solution(["a", "b", "c"], ["a b", "b a", "c a", "a c", "a c", "c a"]))
