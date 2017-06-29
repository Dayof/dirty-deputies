import csv

file_w = open('../dirty_deputies.txt', 'w')

with open('../dirty_deputies_v2.csv', encoding = "UTF-8") as lines:
     dr = csv.DictReader(lines)

     for data in dr:
         line = data['deputy_name'] + '| ' + data['deputy_state'] + '| ' + \
            data['political_party'] + '| ' + data['refund_description'] + '| ' + \
            data['company_name'] + '| ' + data['company_id'] + '| ' + \
            data['refund_date'] + '| ' + data['refund_value'] + '\n'
         file_w.write(line)

file_w.close()
