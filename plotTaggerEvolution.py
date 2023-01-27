import csv
import matplotlib.pyplot as plt
from argparse import ArgumentParser


def getArgumentParser():
    parser = ArgumentParser()
    parser.add_argument(
        "--config",
    )
    return parser


def main():
    args = getArgumentParser().parse_args()
    with open(args.config, 'r') as f:
    	

if __name__ == "__main__":
    main()
