compatability-policy {
    minimum: "1.30.0.1";
    maximum: "${OneLessThanCurrent}";
    versions : {
    };
}

#define { outercurve-publickeytoken: "1e373a58e25250cb"; }

#define { deps-publickeytoken: "${outercurve-publickeytoken}"; }

#define { glib-dep-version: "2.32.3"; }

#define { glib-dep-publickeytoken: "${deps-publickeytoken}"; }

#define { cairo-dep-version: "1.12.2"; }

#define { cairo-dep-publickeytoken: "${deps-publickeytoken}"; }
