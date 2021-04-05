import xlrd
import argparse

#name,email,ieeeno = (0,1,2)

parser = argparse.ArgumentParser(description="NISB Membership comparing tool")
parser.add_argument('xl1', type=str, help="Membership sheet")
parser.add_argument('xl2', type=str, help="Registration sheet")
args = parser.parse_args()

db1 = xlrd.open_workbook(filename=xl1)
db2 = xlrd.open_workbook(filename=xl2)

nisb = db1.sheet_by_index(0)
form = db2.sheet_by_index(0)

nisb_ln = nisb.nrows
form_ln = form.nrows

def bs(nisb_ln, name, iid):
	for x in range(nisb_ln):
		




