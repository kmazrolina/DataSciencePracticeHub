import json
import boto3
import lightgbm

def get_model():
    bucket = boto3.resource('s3').Bucket('nazwa_twojego_bucketu')
    bucket.download_file('model/saved_model.txt', '/tmp/test_model.txt')
    model = lightgbm.Booster(model_file='/tmp/test_model.txt')
    return model

def predict(event):
    try:
        sample = json.loads(event['body'])
        model = get_model()
        result = model.predict(sample)
        return {'statusCode': 200, 'body': json.dumps(result.tolist())}
    except Exception as e:
        return {'statusCode': 500, 'body': str(e)}

def lambda_handler(event, context):
    return predict(event)
