/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:41:31 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/DifferentialPrivacy.framework/DifferentialPrivacy
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface _DPDiagnosticDataReporter : NSObject
+(void)clearScalarKey:(id)arg1 ;
+(void)addValue:(long long)arg1 forScalarKey:(id)arg2 ;
+(void)setValue:(long long)arg1 forScalarKey:(id)arg2 ;
+(id)blacklistFileCreationKey;
+(id)blacklistFileRemovalKey;
+(id)submittedRecordRemovalKey;
+(id)staleRecordRemovalKey;
+(id)staleReportFileRemovalKey;
+(id)IOTrackingPrefix;
+(void)addValue:(long long)arg1 forDPKey:(id)arg2 scalarKeyPrefix:(id)arg3 ;
+(id)budgetUpdateKey;
+(id)diagnosticReportKeyFor:(id)arg1 scalerKeyPrefix:(id)arg2 ;
+(void)setValue:(long long)arg1 forDPKey:(id)arg2 scalarKeyPrefix:(id)arg3 ;
+(void)clearDPKey:(id)arg1 scalarKeyPrefix:(id)arg2 ;
+(id)daReportSubmissionKey;
+(id)parsecReportSubmissionKey;
@end
