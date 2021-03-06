//
//  VelocityProcessorCapture.h
//  VelocityCardSample
//
//  Created by Chetu on 09/02/15.
//  Copyright (c) 2015 NorthAmericanBancard. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "VelocityProcessorAuthWithToken.h"
#import "Address.h"
#import "AuthorizeTransaction.h"
#import "AVSData.h"
#import "BillingData.h"
#import "CardData.h"
#import "CardHolderName.h"
#import "CardSecurityData.h"
#import "CustomerData.h"
#import "ECommerceSecurityData.h"
#import "Email.h"
#import "IdentificationInformation.h"
#import "KeySerialNumber.h"
#import "PIN.h"
#import "ReportingData.h"
#import "TenderData.h"
#import "Track1Data.h"
#import "Transaction.h"
#import "TransactionData.h"

@protocol VelocityProcessorCaptureDelegate<NSObject>
@required
-(void)VelocityProcessorCaptureServerRequestFinishedWithSuccess:(id)successResponse;
-(void)VelocityProcessorCaptureServerRequestFailedWithErrorMessage:(id)failResponse;
@end

@interface VelocityProcessorCapture : NSObject<NSURLSessionTaskDelegate,NSURLSessionDataDelegate>
@property (nonatomic, strong) id <VelocityProcessorCaptureDelegate> delegate;
-(void)captureAndAppprofileid:(NSString *)appProfileID andMerchentID:(NSString *)merchantID andWorkFlowID:(NSString *)workDFlowID andSessionToken:(NSString *)sessionToken andIsTestAccount:(BOOL)isTestAccount;
@end
