/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/usr/lib/libAWDSupportFramework.dylib
 */

@class NSString;

@interface AWDIMessageQueryFinished : PBCodable <NSCopying> {
    unsigned long long _timestamp;
    unsigned int _connectionType;
    int _genericError;
    NSString *_guid;
    unsigned int _isEmail;
    unsigned int _isPhoneNumber;
    int _pOSIXError;
    unsigned int _queryDuration;
    int _resultCode;
    unsigned int _success;
    int _uRLError;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int connectionType : 1; 
        unsigned int genericError : 1; 
        unsigned int isEmail : 1; 
        unsigned int isPhoneNumber : 1; 
        unsigned int pOSIXError : 1; 
        unsigned int queryDuration : 1; 
        unsigned int resultCode : 1; 
        unsigned int success : 1; 
        unsigned int uRLError : 1; 
    } _has;
}

@property(readonly) bool hasGuid;
@property(retain) NSString * guid;
@property bool hasTimestamp;
@property unsigned long long timestamp;
@property bool hasSuccess;
@property unsigned int success;
@property bool hasConnectionType;
@property unsigned int connectionType;
@property bool hasQueryDuration;
@property unsigned int queryDuration;
@property bool hasIsPhoneNumber;
@property unsigned int isPhoneNumber;
@property bool hasIsEmail;
@property unsigned int isEmail;
@property bool hasResultCode;
@property int resultCode;
@property bool hasGenericError;
@property int genericError;
@property bool hasURLError;
@property int uRLError;
@property bool hasPOSIXError;
@property int pOSIXError;


- (int)pOSIXError;
- (int)uRLError;
- (int)genericError;
- (int)resultCode;
- (unsigned int)isEmail;
- (unsigned int)queryDuration;
- (bool)hasPOSIXError;
- (void)setHasPOSIXError:(bool)arg1;
- (void)setPOSIXError:(int)arg1;
- (bool)hasURLError;
- (void)setHasURLError:(bool)arg1;
- (void)setURLError:(int)arg1;
- (bool)hasGenericError;
- (void)setHasGenericError:(bool)arg1;
- (void)setGenericError:(int)arg1;
- (bool)hasResultCode;
- (void)setHasResultCode:(bool)arg1;
- (void)setResultCode:(int)arg1;
- (bool)hasIsEmail;
- (void)setHasIsEmail:(bool)arg1;
- (void)setIsEmail:(unsigned int)arg1;
- (bool)hasIsPhoneNumber;
- (void)setHasIsPhoneNumber:(bool)arg1;
- (void)setIsPhoneNumber:(unsigned int)arg1;
- (bool)hasQueryDuration;
- (void)setHasQueryDuration:(bool)arg1;
- (void)setQueryDuration:(unsigned int)arg1;
- (bool)hasConnectionType;
- (void)setHasConnectionType:(bool)arg1;
- (void)setConnectionType:(unsigned int)arg1;
- (bool)hasSuccess;
- (void)setHasSuccess:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (bool)hasGuid;
- (bool)hasTimestamp;
- (void)copyTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (unsigned int)connectionType;
- (bool)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;
- (unsigned int)success;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (void)setGuid:(id)arg1;
- (id)guid;
- (unsigned int)isPhoneNumber;
- (void)setSuccess:(unsigned int)arg1;
- (bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;

@end